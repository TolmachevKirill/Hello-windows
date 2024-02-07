pipeline {
    agent any

    stages {
        stage('Clean') {
            steps {
                // Очистка рабочего каталога
                sh 'rm -rf build'
            }
        }
        stage('Prepare') {
            steps {
                // Подготовка к сборке
                sh 'cmake -B build -DCMAKE_SYSTEM_NAME=Windows -DCMAKE_C_COMPILER=x86_64-w64-mingw32-gcc -DCMAKE_CXX_COMPILER=x86_64-w64-mingw32-g++'
            }
        }
        stage('Build') {
            steps {
                // Сборка проекта
                sh 'cmake --build build'
            }
        }
        stage('Archive') {
            steps {
                // Копирование артефактов сборки
                sh 'cp -r build/* /home/auto-admin/TestBuilder/'
            }
        }
    }

    post {
        success {
            // Действия после успешной сборки
            echo 'Build and archive were successful!'
        }
        failure {
            // Действия в случае неудачной сборки
            echo 'Build failed!'
        }
    }
}

