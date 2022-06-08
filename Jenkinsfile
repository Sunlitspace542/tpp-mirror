pipeline {
  agent any
  stages {
    stage('Build Tools') {
      steps {
        sh 'make -C tools/'
      }
    }

    stage('Extract Assets') {
      steps {
        sh 'ln -s "$JENKINS_HOME/required/Super Mario 64 (Japan).z64" baserom.jp.z64'
        sh '[ -z "$(find {actors,levels,textures}/ -name \'*.png\')" ]'
        sh '[ -z "$(find assets/ -name \'*.m64\' -or \'*.bin\')" ]'
        sh './extract_assets.py jp'
      }
    }

    stage('Build J Source') {
      steps {
        sh 'make VERSION=jp'
      }
    }

  }
  
  post {
    always {
      archiveArtifacts 'build/*/*.z64'
    }
  }
}
