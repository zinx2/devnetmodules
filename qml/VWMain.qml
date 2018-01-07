import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import "Resources.js" as R

Paper {
    id: mainView
    visibleBackBtn: false
    visibleSearchBtn: false
    //    width: R.design_size_width
    //    height: R.design_size_height

    ScrollView
    {
        id: scrollView
        clip: true
        width: parent.width
        height: parent.height - R.height_titlaBar - 1
         y: R.height_titlaBar + 1

        Column
        {
            width: scrollView.width
            height: scrollView.height
            spacing: 1

            CPText
            {
                text: md.error
                font.pointSize: R.pt(22)
                width: parent.width
                horizontalAlignment: Text.AlignHCenter
            }

            CPButton
            {
                sourceWidth: parent.width
                sourceHeight: R.dp(100)
                width: parent.width
                height: R.dp(100)
                type: "text"
                btnName: "GET ALL DEMO LIST~"
                rectColor: "orange"
                textColor: "white"
                fontSize: R.pt(15)
                on_Clicked: {
    //                nt.title();
                    wk.getDemoAll();
                }
            }


            CPButton
            {
                sourceWidth: parent.width
                sourceHeight: R.dp(100)
                width: parent.width
                height: R.dp(100)
                type: "text"
                btnName: "GET A DEMO."
                rectColor: "orange"
                textColor: "white"
                fontSize: R.pt(15)
                on_Clicked:
                {
                    wk.getDemo(15);
                }
            }

            CPButton
            {
                sourceWidth: parent.width
                sourceHeight: R.dp(100)
                width: parent.width
                height: R.dp(100)
                type: "text"
                btnName: "POST ALL DEMO LIST~"
                rectColor: "orange"
                textColor: "white"
                fontSize: R.pt(15)
                on_Clicked: {
                    wk.postDemoAll();
                }
            }

            CPButton
            {
                sourceWidth: parent.width
                sourceHeight: R.dp(100)
                width: parent.width
                height: R.dp(100)
                type: "text"
                btnName: "POST A DEMO ~"
                rectColor: "orange"
                textColor: "white"
                fontSize: R.pt(15)
                on_Clicked: {
                    wk.postDemo(11);
                }
            }
        }
    }




}

