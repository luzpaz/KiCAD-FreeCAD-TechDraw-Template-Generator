#ifndef TEMPLATEGENFREECAD_H
#define TEMPLATEGENFREECAD_H

#include <QObject>
#include <QFile>
#include <QDomDocument>

#include "templateoptions.h"

class TemplateGenFreeCAD : public QObject
{
    Q_OBJECT
private:
    FinisheD finisheD;

    QString DIR;
    QFile *FILE;
    QTextStream *XMLTEXTSTREM;
    QDomDocument DOCUMENT;
    QDomElement ROOT;

    PageSize PAGESIZE;
    QString SHEETNAME;
    PageStyle PAGESTYLE;
    bool TRIMMINGMARKS;
    qint64 NUMOPTLINES;
    QMap<QString, TitelblockField> TITELBLOCKFIELDS;
    bool REVHISTORY;
    RevHistoryStyle REVHISTORYSTYLE;
    qint64 NUMREVHISTORY;
    QMap<QString, TitelblockField> REVHISTORYFIELDS;
    bool FOLDLINES;
    PageSize FOLDLINETARGET;
    bool SMALLPARTSLIST;
    quint64 NUMPARTSSMALLPARTSLIST;
    quint64 NUMLINESMALLPARTSLIST;
    QMap<QString, TitelblockField> SMALLPARTSLISTFIELDS;
    bool FULLSHEETPARTSLIST;
    quint64 NUMLINESFULLSHEETPARTSLIST;
    QMap<QString, TitelblockField> FULLSHEETPARTSLISTFIELDS;
    bool LOGO;
    QString LOGODIR;

    qint64 NAMEINDEX = 0;
    CenteringMarks CENTERINGMARKS{true, true, true, true};
    Coordinate TOPRIGHTDRAWINGCORNER;
    Coordinate TOPLEFTDRAWINGCORNER;
    Coordinate TOPLEFTITELBLOCKCORNER;

    bool init();

    QString createFileName();

    void drawLine(Coordinate start, Coordinate end, double lineWidth);
    void drawRect(Coordinate start, Coordinate end, double lineWidth);
    void drawPoly(Coordinate position, QList<Coordinate> points, double lineWidth);
    qint64 drawText(Coordinate position, QString text, QString name, double textSize, TextHeightAnchor textHeightAnchor, TextWidthAnchor textWidthAnchor, double lineWidth, bool isEditable = false, QString font = "osifont");
    qint64 drawText(Coordinate position, QStringList text, QString name, double textSize, TextHeightAnchor textHeightAnchor, TextWidthAnchor textWidthAnchor, double lineWidth, bool isEditable = false, qint64 index = 0);

    void drawVerFoldLine(double x, double depth);
    void drawHorFoldLine(double y, double depth);

    void drawTrimmingMarksISO5457();
    void drawDrawingBorderISO5457();
    void drawTitelblockISO7200();
    void drawRevHistoryASME_Y14_35_Width180();
    void drawFoldLines(double depth);
    void drawSmallPartsList();
    void drawFullSheetPartsList();
    void drawLogoTitelblockISO7200();

    void drawISO5457_ISO7200();
public:
    explicit TemplateGenFreeCAD(QObject *parent = nullptr);
    ~TemplateGenFreeCAD();

    void draw();

    const QString &getDIR() const;
    void setDIR(const QString &newDIR);

    const PageSize &getPAGESIZE() const;
    void setPAGESIZE(const PageSize &newPAGESIZE);

    PageStyle getPAGESTYLE() const;
    void setPAGESTYLE(PageStyle newPAGESTYLE);

    qint64 getNUMOPTLINES() const;
    void setNUMOPTLINES(qint64 newNUMOPTLINES);

    const QMap<QString, TitelblockField> &getTITELBLOCKFIELDS() const;
    void setTITELBLOCKFIELDS(const QMap<QString, TitelblockField> &newTITELBLOCKFIELDS);

    bool getTRIMMINGMARKS() const;
    void setTRIMMINGMARKS(bool newTRIMMINGMARKS);

    RevHistoryStyle getREVHISTORYSTYLE() const;
    void setREVHISTORYSTYLE(RevHistoryStyle newREVHISTORYSTYLE);

    const QMap<QString, TitelblockField> &getREVHISTORYFIELDS() const;
    void setREVHISTORYFIELDS(const QMap<QString, TitelblockField> &newREVHISTORYFIELDS);

    qint64 getNUMREVHISTORY() const;
    void setNUMREVHISTORY(qint64 newNUMREVHISTORY);

    bool getREVHISTORY() const;
    void setREVHISTORY(bool newREVHISTORY);

    bool getFOLDLINES() const;
    void setFOLDLINES(bool newFOLDLINES);

    const PageSize &getFOLDLINETARGET() const;
    void setFOLDLINETARGET(const PageSize &newFOLDLINETARGET);

    quint64 getNUMPARTSSMALLPARTSLIST() const;
    void setNUMPARTSSMALLPARTSLIST(quint64 newNUMPARTSSMALLPARTSLIST);

    bool getSMALLPARTSLIST() const;
    void setSMALLPARTSLIST(bool newSMALLPARTSLIST);

    quint64 getNUMLINESMALLPARTSLIST() const;
    void setNUMLINESMALLPARTSLIST(quint64 newNUMLINESMALLPARTSLIST);

    const QMap<QString, TitelblockField> &getSMALLPARTSLISTFIELDS() const;
    void setSMALLPARTSLISTFIELDS(const QMap<QString, TitelblockField> &newSMALLPARTSLISTFIELDS);

    bool getFULLSHEETPARTSLIST() const;
    void setFULLSHEETPARTSLIST(bool newFULLSHEETPARTSLIST);

    quint64 getNUMLINESFULLSHEETPARTSLIST() const;
    void setNUMLINESFULLSHEETPARTSLIST(quint64 newNUMLINESFULLSHEETPARTSLIST);

    quint64 getNUMSHEETSFULLSHEETPARTSLIST() const;
    void setNUMSHEETSFULLSHEETPARTSLIST(quint64 newNUMSHEETSFULLSHEETPARTSLIST);

    const QMap<QString, TitelblockField> &getFULLSHEETPARTSLISTFIELDS() const;
    void setFULLSHEETPARTSLISTFIELDS(const QMap<QString, TitelblockField> &newFULLSHEETPARTSLISTFIELDS);

    bool getLOGO() const;
    void setLOGO(bool newLOGO);

    const QString &getLOGODIR() const;
    void setLOGODIR(const QString &newLOGODIR);

    const QString &getSHEETNAME() const;
    void setSHEETNAME(const QString &newSHEETNAME);

signals:

};

#endif // TEMPLATEGENFREECAD_H