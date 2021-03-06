#ifndef BUEIRO_H
#define BUEIRO_H

#include "qstring.h"
#include "configurarrede_dialog.h"

class Bueiro
{

    private:

        QString _id, _bairro, _rua, _tipoDeBueiro;

        float _nivel;
        float _carga;

    public:

        Bueiro();

        float nivel() const;
        void setNivel(float nivel);

        float carga() const;
        void setCarga(float carga);

        QString tipoDeBueiro() const;
        void setTipoDeBueiro(QString tipoDeBueiro);

        QString id() const;
        void setId(const QString &id);

        QString bairro() const;
        void setBairro(const QString &bairro);

        QString rua() const;
        void setRua(const QString &rua);
};

#endif // BUEIRO_H
