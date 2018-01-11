package net.techpda.snslogin;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

import net.techpda.snslogin.R;

/**
 * Created by JHKim on 2018-01-10.
 */

public class UserKakao extends Activity {
    @Override
    protected void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_user_kakao);

        Button btnKakaoRequestUserInfo = (Button) findViewById(R.id.btnKakaoRequestUserInfo);
        btnKakaoRequestUserInfo.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(UserKakao.this, "카카오 사용자 정보 요청", Toast.LENGTH_SHORT).show();
            }
        });

        Button btnKakaoSaveUserInfo = (Button) findViewById(R.id.btnKakaoSaveUserInfo);
        btnKakaoSaveUserInfo.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(UserKakao.this, "카카오 사용자 정보 저장", Toast.LENGTH_SHORT).show();
            }
        });

        Button btnKakaoConnectApp = (Button) findViewById(R.id.btnKakaoConnectApp);
        btnKakaoConnectApp.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(UserKakao.this, "카카오 앱 연결", Toast.LENGTH_SHORT).show();
            }
        });

        Button btnKakaoDisconnectApp = (Button) findViewById(R.id.btnKakaoDisconnectApp);
        btnKakaoDisconnectApp.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(UserKakao.this, "카카오 앱 연결 해제", Toast.LENGTH_SHORT).show();
            }
        });

        Button btnKakaoLogin = (Button) findViewById(R.id.btnKakaoLogin);
        btnKakaoLogin.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(UserKakao.this, "카카오 로그인", Toast.LENGTH_SHORT).show();
            }
        });

        Button btnKakaoLogout = (Button) findViewById(R.id.btnKakaoLogout);
        btnKakaoLogout.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Toast.makeText(UserKakao.this, "카카오 로그아웃", Toast.LENGTH_SHORT).show();
            }
        });
    }
}