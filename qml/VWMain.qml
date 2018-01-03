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

    Column
    {
        width: parent.width
        height: parent.height
        y: R.height_titlaBar + 1
        spacing: 1


        CPButton
        {
            sourceWidth: parent.width
            sourceHeight: R.dp(100)
            width: parent.width
            height: R.dp(100)
            type: "text"
            btnName: "THERAD TEST.."
            rectColor: "orange"
            textColor: "white"
            fontSize: R.pt(15)
            on_Clicked: console.log(md.title)
        }


        CPButton
        {
            sourceWidth: parent.width
            sourceHeight: R.dp(100)
            width: parent.width
            height: R.dp(100)
            type: "text"
            btnName: "단순 통신 테스트."
            rectColor: "orange"
            textColor: "white"
            fontSize: R.pt(15)
        }

        CPButton
        {
            sourceWidth: parent.width
            sourceHeight: R.dp(100)
            width: parent.width
            height: R.dp(100)
            type: "text"
            btnName: "IMAGE LAZY LOADING."
            rectColor: "orange"
            textColor: "white"
            fontSize: R.pt(15)
        }

//        CPButton
//        {

//        }

//        CPButton
//        {

//        }
    }


}

