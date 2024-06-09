#ifndef NOTIFICATIONOBSERVER_H
#define NOTIFICATIONOBSERVER_H
class Patient;

// Observer pattern
class NotificationObserver {
public:
    virtual void sendPatientNotif(Patient* patient) = 0;
};

#endif