#include <boost/filesystem.hpp>
#include <QApplication>
#include <QMessageBox>

int main(int argc, char **argv) {
    boost::filesystem::path full_path(boost::filesystem::current_path());
    QApplication app{argc, argv};
    QMessageBox msgBox;
    msgBox.setText(full_path.c_str());
    msgBox.show();
    return app.exec();
}