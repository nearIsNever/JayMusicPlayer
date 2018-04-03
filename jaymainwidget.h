#ifndef JAYMAINWIDGET_H
#define JAYMAINWIDGET_H

#include <QWidget>
#include <QSystemTrayIcon>
#include <QAction>
#include <QToolBar>
#include <phonon>

namespace Ui {
    class JayMainWidget;
}

class JayMainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit JayMainWidget(QWidget *parent = 0);
    ~JayMainWidget();

private:
    Ui::JayMainWidget *ui;
public:
    void InitUi();
protected:
    void closeEvent(QCloseEvent *);
private:
    QSystemTrayIcon *m_pTrayIcon;
    QAction *m_pPlayPauseAction;
    QAction *m_pForwardAction;
    QAction *m_pBackwardaAction;
    QAction *m_pOpenFileAction;
    QAction *m_pOpenMusicListAction;
    QAction *m_pOpenLrcAction;
    QAction *m_pPlayModeAction;

    QToolBar *m_pPlayListToolbar;
    QToolBar *m_pPlayControlToolbar;
    QToolBar *m_pPlayVoiceToolbar;

    Phonon::VolumeSlider *m_pVolume;




};

#endif // JAYMAINWIDGET_H
