#include "jaymainwidget.h"
#include "ui_jaymainwidget.h"
#include <QIcon>
#include <QPalette>
#include <QPixmap>
#include <QBrush>
#include <QCloseEvent>

#include <Qmenu>


JayMainWidget::JayMainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JayMainWidget)
{
    ui->setupUi(this);   
    InitUi();
}

void JayMainWidget::InitUi()
{
    setMinimumSize(460,640);
    setMaximumSize(460,640);
    setWindowTitle(tr("Jay音乐播放器"));
    setWindowIcon(QIcon("./skin/log.png"));
    //设置背景图片
    QPixmap pixmap("./skin/all_background.png");
    QBrush brush(pixmap);
    QPalette palette;
    palette.setBrush(QPalette::Background,brush);
    setPalette(palette);
    QMenu *pMenu = new QMenu(tr("Jay音乐播放器"));
    pMenu->addAction(tr("退出"),this,SLOT(close()));
    m_pTrayIcon = new QSystemTrayIcon(QIcon("./skin/log.png"));
    m_pTrayIcon->setContextMenu(pMenu);
    m_pTrayIcon->show();

    //初始化相关action
    m_pPlayPauseAction = new QAction(QIcon("./skin/playing_button.png"),tr("player"),this);
    m_pForwardAction = new QAction(QIcon(tr("./skin/forward.png")),tr("forward"),this);
    m_pBackwardaAction = new QAction(QIcon(tr("./skin/backward.png")),tr("backward"),this);
    m_pPlayControlToolbar = new QToolBar(this);
    m_pPlayControlToolbar->addAction(m_pBackwardaAction);
    m_pPlayControlToolbar->addSeparator();
    m_pPlayControlToolbar->addAction(m_pPlayPauseAction);
    m_pPlayControlToolbar->addSeparator();
    m_pPlayControlToolbar->addAction(m_pForwardAction);

    //
    m_pOpenFileAction = new QAction(QIcon(tr("./skin/openfile.png")),tr("openfile"),this);
    m_pOpenMusicListAction = new QAction(QIcon(tr("./skin/musiclist.png")),tr("musiclist"),this);
    m_pPlayModeAction = new QAction(QIcon(tr("./skin/palymode.png")),tr("palymode"),this);
    m_pOpenLrcAction = new QAction(tr("LRC"),this);
    m_pPlayListToolbar = new QToolBar(this);
    m_pPlayListToolbar->addAction(m_pOpenFileAction);
    m_pPlayListToolbar->addSeparator();
    m_pPlayListToolbar->addAction(m_pOpenMusicListAction);
     m_pPlayListToolbar->addSeparator();
    m_pPlayListToolbar->addAction(m_pPlayModeAction);
     m_pPlayListToolbar->addSeparator();
    m_pPlayListToolbar->addAction(m_pOpenLrcAction);

    //
    m_pVolume = new Phonon::VolumeSlider();
    m_pPlayVoiceToolbar = new QToolBar(this);
    m_pPlayVoiceToolbar->addWidget(m_pVolume);

    m_pPlayListToolbar->setGeometry(QRect(20,560,160,40));
    m_pPlayControlToolbar->setGeometry(QRect(200,560,120,40));
    m_pPlayVoiceToolbar->setGeometry(QRect(340,560,100,40));


}

void JayMainWidget::closeEvent(QCloseEvent *event)
{
   if(isVisible())
   {
   //  hide();
  //   event->ignore();
       close();
   }

}

JayMainWidget::~JayMainWidget()
{
    delete ui;
}
