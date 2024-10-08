#pragma once

#include <QObject>

class I_DriverControlsData : public QObject
{
    Q_OBJECT

public:
    virtual ~I_DriverControlsData() {}

    virtual bool alive() const = 0;
    virtual bool headlightsOff() const = 0;
    virtual bool headlightsLow() const = 0;
    virtual bool headlightsHigh() const = 0;
    virtual bool signalRight() const = 0;
    virtual bool signalLeft() const = 0;
    virtual bool hazard() const = 0;
    virtual bool interior() const = 0;
    virtual bool aux() const = 0;
    virtual bool volumeUp() const = 0;
    virtual bool volumeDown() const = 0;
    virtual bool nextSong() const = 0;
    virtual bool prevSong() const = 0;
    virtual double acceleration() const = 0;
    virtual double regenBraking() const = 0;
    virtual bool brakes() const = 0;
    virtual bool forward() const = 0;
    virtual bool reverse() const = 0;
    virtual bool pushToTalk() const = 0;
    virtual bool horn() const = 0;
    virtual bool reset() const = 0;

    virtual void setAlive(bool alive) = 0;
    virtual void setHeadlightsOff(bool headlightsOff) = 0;
    virtual void setHeadlightsLow(bool headlightsLow) = 0;
    virtual void setHeadlightsHigh(bool headlightsHigh) = 0;
    virtual void setSignalRight(bool signalRight) = 0;
    virtual void setSignalLeft(bool signalLeft) = 0;
    virtual void setHazard(bool hazard) = 0;
    virtual void setInterior(bool interior) = 0;
    virtual void setAux(bool aux) = 0;
    virtual void setVolumeUp(bool volumeUp) = 0;
    virtual void setVolumeDown(bool volumeDown) = 0;
    virtual void setNextSong(bool nextSong) = 0;
    virtual void setPrevSong(bool prevSong) = 0;
    virtual void setAcceleration(double acceleration) = 0;
    virtual void setRegenBraking(double regenBraking) = 0;
    virtual void setBrakes(bool brakes) = 0;
    virtual void setForward(bool forward) = 0;
    virtual void setReverse(bool reverse) = 0;
    virtual void setPushToTalk(bool pushToTalk) = 0;
    virtual void setHorn(bool horn) = 0;
    virtual void setReset(bool reset) = 0;

signals:
    void aliveReceived(bool);
    void headlightsOffReceived(bool val);
    void headlightsLowReceived(bool val);
    void headlightsHighReceived(bool val);
    void signalRightReceived(bool val);
    void signalLeftReceived(bool val);
    void hazardReceived(bool val);
    void interiorReceived(bool val);
    void auxReceived(bool val);
    void volumeUpReceived(bool val);
    void volumeDownReceived(bool val);
    void nextSongReceived(bool val);
    void prevSongReceived(bool val);
    void accelerationReceived(double num);
    void regenBrakingReceived(double num);
    void brakesReceived(bool val);
    void forwardReceived(bool val);
    void reverseReceived(bool val);
    void pushToTalkReceived(bool val);
    void hornReceived(bool val);
    void resetReceived(bool val);
};
